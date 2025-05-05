@interface IESLiveGiftPanelUtil : NSObject
+ (id)buildVerticalCollectionLayoutWithDataSharing:builderLayoutInfo:;
+ (id)buildCollectionLayoutWithDataSharing:builderLayoutInfo:;
+ (id)buildPartitionListCollectionLayoutWithBuilderLayoutInfo:;
+ (id)panelBackgroundColor;
+ (void)updateWalletModel;
@end
