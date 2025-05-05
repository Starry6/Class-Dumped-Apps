@interface CTCall : NSObject
@property (nonatomic) NSString callState;
@property (nonatomic) NSString callID;
- (void)dealloc;
- (unsigned long long)hash;
- (void)setCallState:;
- (id)description;
- (id)callState;
- (BOOL)isEqual:;
- (id)callID;
- (void)setCallID:;
+ (id)callForCTCallRef:;
+ (id)callForCXCall:;
@end
