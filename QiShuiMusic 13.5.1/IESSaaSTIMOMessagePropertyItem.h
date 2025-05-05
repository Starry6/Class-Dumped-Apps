@interface IESSaaSTIMOMessagePropertyItem : NSObject
@property (nonatomic) NSString idempotentID;
@property (nonatomic) q sender;
@property (nonatomic) NSString senderSecID;
@property (nonatomic) NSDate createdAt;
@property (nonatomic) NSString value;
@property (nonatomic) NSString idempotentID;
@property (nonatomic) q sender;
@property (nonatomic) NSString senderSecID;
@property (nonatomic) NSDate createdAt;
@property (nonatomic) NSString value;
- (void)setSenderSecID:;
- (id)idempotentID;
- (id)senderSecID;
- (void)setIdempotentID:;
- (long long)sender;
- (void)setValue:;
- (void)setCreatedAt:;
- (void).cxx_destruct;
- (id)createdAt;
- (id)value;
- (void)setSender:;
@end
