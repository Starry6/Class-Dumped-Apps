@interface AWEPzQueryComponentModel : NSObject
@property (nonatomic) NSString callTraceId;
@property (nonatomic) NSString callTraceType;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString secUid;
- (id)secUid;
- (void)setSecUid:;
- (void)setCallTraceType:;
- (void)setCallTraceId:;
- (id)callTraceId;
- (id)callTraceType;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
@end
