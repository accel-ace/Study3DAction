# ジップライン仕様

## 該当ファイル

### BluePrint(Study3DAction/Content/ThirdPerson/Blueprints/Gimmick)
- BP_ScaffoldActor.uasset
- BP_ZipLineActor.uasset

### ソースコード(Study3DAction/Source/Study3DAction/Public/FieldGimmik)
- ScaffoldActor.h
- ZipLineActor.h

## アセットの独自プロパティ

### ScaffoldActor

足場オブジェクト  
マップ上の任意のZipLineActorを指定してその上を移動する足場のオブジェクト機能

#### カテゴリ名: ZipLine

- ZipLineActor
  - 対応するジップライン
  - 指定したジップライン上の範囲を移動する
- Speed
  - オブジェクトの移動速度
  - デフォルト値: 50.0
- IsLoop
  - 移動のループフラグ
  - オンにした場合にはジップライン上をオブジェクトが終端まで来た場合には始端に戻りそこから再度動き始める

## 使用方法

1.BP_ZipLineActorを任意のマップ上に配置を行う。  
2.配置したBP_ZipLineActorのスプラインポイントの追加・長さ調整を行い足場の移動範囲を決める。  
3.BP_ScaffoldActorをBP_ZipLineActorと同じマップ上に配置する。  
4.配置したBP_ScaffoldActorの詳細>ZipLineのZipLineActorにマップ上のBP_ZipLineActorを指定する。  
5.配置したBP_ScaffoldActorの詳細>ZipLineのSpeed、IsLoopで移動速度、移動のループ設定を指定する。
6.エディタからプレイして実際に動くことを確認する。