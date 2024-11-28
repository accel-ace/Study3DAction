# プレイヤーキャラクター仕様

## 該当ファイル

### BluePrint(Study3DAction/Content/ThirdPerson/Blueprints/)

- BP_ThirdPersonCharacter.uasset

### ソースコード(Study3DAction/Source/Study3DAction/)

- Study3DActionCharacter.h

## アセットの独自プロパティ

### Actor

#### カテゴリ: 入力

- UniqueAction
  - 入力: 左クリック、N
  - 銃による射撃機能
- RightAction
  - 入力: 右クリック、M
  - 呼び機能、ログ出力

## 実装内容

ThirdParsonプロジェクトで自動ジェネレートされたプレイヤーActorに対して左クリック時に弾丸を打ち出す機能を追加
