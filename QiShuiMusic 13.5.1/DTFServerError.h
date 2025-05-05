@interface DTFServerError : NSError
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retcodeSub;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString comment;
- (id)retCode;
- (id)retcodeSub;
- (void)setRetCode:;
- (void)setRetcodeSub:;
- (id)comment;
- (id)localizedDescription;
- (id)reason;
- (void)setReason:;
- (void).cxx_destruct;
- (void)setComment:;
+ (id)errorWithReason:comment:;
+ (id)errorWithRetCode:;
+ (id)errorWithRetCodeSub:;
@end
