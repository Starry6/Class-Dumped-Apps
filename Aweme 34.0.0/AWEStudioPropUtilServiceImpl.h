@interface AWEStudioPropUtilServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stickersFromModel:withCurrentIndex:;
- (id)userCountStringByNum:tailString:;
- (id)formatedDurationMS:;
- (id)anchorSubtitleTrackInfoWithAweme:;
- (BOOL)enableTemplateAnchorTwoLineStyleWithAweme:;
- (id)anchorSubtitleWithAweme:;
- (BOOL)enablePropAnchorTwoLineStyleWithAweme:;
- (BOOL)templateAnchorShouldShowTemplateDuration;
- (id)combineStrA:strB:withMarkStr:;
@end
