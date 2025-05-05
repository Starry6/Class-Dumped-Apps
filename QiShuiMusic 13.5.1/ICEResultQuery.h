@interface ICEResultQuery : NSObject
@property (nonatomic) ^{tagCONNRESULT=IiiIiiSS{tagIPPORT=i[16c](?=I[16C])S}{tagIPPORT=i[16c](?=I[16C])S}{tagIPPORT=i[16c](?=I[16C])S}{tagIPPORT=i[16c](?=I[16C])S}{tagIPPORT=i[16c](?=I[16C])S}{tagIPPORT=i[16c](?=I[16C])S}IiiiiSiii^{tagCONNRESULT}i} result;
@property (nonatomic) I callID;
@property (nonatomic) BOOL isQueryAnswered;
- (id)result;
- (void)dealloc;
- (id)initWithResult:;
- (void)setResult:;
- (unsigned int)callID;
- (void)setCallID:;
- (id)initWithCallID:;
- (BOOL)isQueryAnswered;
- (void)setIsQueryAnswered:;
@end
