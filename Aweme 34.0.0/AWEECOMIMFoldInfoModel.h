@interface AWEECOMIMFoldInfoModel : NSObject
@property (nonatomic) NSString foldGroupKey;
@property (nonatomic) Q foldMethod;
@property (nonatomic) double foldDuration;
- (id)foldGroupKey;
- (unsigned long long)foldMethod;
- (void)setFoldGroupKey:;
- (void)setFoldMethod:;
- (void)setFoldDuration:;
- (double)foldDuration;
- (void).cxx_destruct;
@end
