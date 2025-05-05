@interface OSABridgeLinkProxy : NSObject
- (void)transferInternal:key:;
+ (void)setLink:;
+ (void)transfer:key:;
@end
