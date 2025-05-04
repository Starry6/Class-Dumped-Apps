@interface AWEAdAttachAreaViewProvider : HTSService
- (id)init;
+ (id)anchorAttachView;
+ (BOOL)isAvailableAnchorType:experimentDict:;
@end
