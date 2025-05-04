@interface AWELiveRoomBusinessParam : NSObject
@property (nonatomic) q businessType;
@property (nonatomic) NSMutableDictionary businessContextParams;
@property (nonatomic) NSMutableDictionary businessClickParams;
@property (nonatomic) NSMutableDictionary businessFirstShowParams;
@property (nonatomic) NSMutableDictionary businessJsonParams;
- (void)setBusinessType:;
- (id)businessContextParams;
- (id)businessClickParams;
- (id)businessFirstShowParams;
- (id)businessJsonParams;
- (void)setBusinessContextParams:;
- (void)setBusinessClickParams:;
- (void)setBusinessFirstShowParams:;
- (void)setBusinessJsonParams:;
- (long long)businessType;
- (void).cxx_destruct;
- (id)initWithType:;
@end
