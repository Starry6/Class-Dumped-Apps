@interface AWEAlertInternalWrapper : NSObject
@property (nonatomic) BOOL prepared;
@property (nonatomic) q priority;
@property (nonatomic) q event;
@property (nonatomic) NSObject<NSCopying> identifier;
@property (nonatomic) <AWEAlertProtocol> alert;
@property (nonatomic) @? completion;
- (id)completion;
- (id)alert;
- (void)setCompletion:;
- (void)setEvent:;
- (void)setPriority:;
- (long long)event;
- (void)setAlert:;
- (void)setPrepared:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (long long)priority;
- (BOOL)prepared;
@end
