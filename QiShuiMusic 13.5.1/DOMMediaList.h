@interface DOMMediaList : DOMObject
@property (nonatomic) NSString mediaText;
@property (nonatomic) I length;
- (void)dealloc;
- (unsigned int)length;
- (id)item:;
- (id)mediaText;
- (void)setMediaText:;
- (void)deleteMedium:;
- (void)appendMedium:;
@end
