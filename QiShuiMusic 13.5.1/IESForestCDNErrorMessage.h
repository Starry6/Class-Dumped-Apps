@interface IESForestCDNErrorMessage : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString detail;
- (id)initWithURL:detail:;
- (id)url;
- (void)setDetail:;
- (void)setUrl:;
- (id)detail;
- (void).cxx_destruct;
- (id)description;
@end
