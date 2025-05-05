@interface AAPendingIDSMessage : NSObject
@property (nonatomic) NSString senderHandle;
@property (nonatomic) NSData data;
@property (nonatomic) q type;
- (id)data;
- (long long)type;
- (id)senderHandle;
- (void).cxx_destruct;
- (id)initInheritanceMessageFrom:data:;
- (id)initCustodianMessageFrom:data:;
@end
