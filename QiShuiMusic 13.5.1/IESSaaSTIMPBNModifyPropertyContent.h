@interface IESSaaSTIMPBNModifyPropertyContent : GPBMessage
@property (nonatomic) NSInteger operation;
@property (nonatomic) BOOL hasOperation;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSString value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSString idempotentId;
@property (nonatomic) BOOL hasIdempotentId;
+ (id)descriptor;
@end
