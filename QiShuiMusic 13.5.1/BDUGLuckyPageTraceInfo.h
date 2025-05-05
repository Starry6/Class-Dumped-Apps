@interface BDUGLuckyPageTraceInfo : NSObject
@property (nonatomic) UIViewController page;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString tagWithTime;
- (void)setTagWithTime:;
- (id)initWithPagePointer:tag:tagWithTime:;
- (id)tagWithTime;
- (id)page;
- (void)setPage:;
- (id)tag;
- (id)init;
- (void)setTag:;
- (void).cxx_destruct;
@end
