@interface AWESideBarSubtitleDisplayBaseInfo : NSObject
@property (nonatomic) NSString subtitle;
@property (nonatomic) double consumeTime;
@property (nonatomic) BOOL hasConsume;
- (BOOL)hasConsume;
- (double)consumeTime;
- (id)initWithSubtitle:;
- (id)subtitle;
- (void)consume;
- (void).cxx_destruct;
@end
