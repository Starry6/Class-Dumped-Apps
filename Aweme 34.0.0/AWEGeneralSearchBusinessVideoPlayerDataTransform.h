@interface AWEGeneralSearchBusinessVideoPlayerDataTransform : NSObject
+ (BOOL)enableMixVideo:;
+ (id)tokenTypeForModel:;
+ (BOOL)enableMixTypeRelatedVideo:;
+ (BOOL)enablePlayletBottomView:;
+ (BOOL)enableHotSearchTipView:referString:;
+ (id)getStandardVideoPlayerModelWithSearchVideoCardModel:;
+ (id)getLeftTopContainerModelWithCardModel:;
+ (id)getRightBottomContainerModelWithCardModel:;
+ (id)getBottomContainerModelWithCardModel:;
+ (id)getLeftBottomContainerModelWithCardModel:;
+ (id)componentCommonTrackDataWithCardModel:;
+ (BOOL)showAuthorInfoWithModel:;
+ (id)publishTimeWithModel:;
+ (id)btmIdWtihCardModel:;
+ (id)dcmIdWtihCardModel:;
@end
