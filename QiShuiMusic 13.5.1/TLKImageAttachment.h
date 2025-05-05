@interface TLKImageAttachment : NSTextAttachment
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) BOOL isPlaceholder;
- (BOOL)isPlaceholder;
- (void)setIsPlaceholder:;
- (void)setSize:;
- (id)size;
@end
