@interface UISSlotEmptyContent : NSObject
- (unsigned char)contentScale;
- (id)initWithSize:;
- (id)contentSize;
- (BOOL)isRemote;
- (id)image;
- (void)deleteFromLayerContext:;
- (BOOL)shouldReplaceExistingContent;
+ (id)contentWithSize:;
@end
