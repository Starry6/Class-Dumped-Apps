@interface MRMigrationBehaviorResult : NSObject
@property (nonatomic) NSString sourceUID;
@property (nonatomic) NSString destinationUID;
@property (nonatomic) q action;
@property (nonatomic) NSString reason;
@property (nonatomic) NSError error;
- (void)setError:;
- (long long)action;
- (id)reason;
- (id)error;
- (unsigned long long)hash;
- (void)setReason:;
- (void)setAction:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)sourceUID;
- (void)setSourceUID:;
- (id)destinationUID;
- (void)setDestinationUID:;
@end
