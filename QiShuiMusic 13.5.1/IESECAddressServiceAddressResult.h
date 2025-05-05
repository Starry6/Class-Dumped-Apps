@interface IESECAddressServiceAddressResult : NSObject
@property (nonatomic) NSString curBtm;
@property (nonatomic) NSString lastBtm;
@property (nonatomic) q type;
- (id)lastBtm;
- (id)curBtm;
- (void)setCurBtm:;
- (void)setLastBtm:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
@end
