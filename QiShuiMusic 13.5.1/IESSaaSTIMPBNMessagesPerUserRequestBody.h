@interface IESSaaSTIMPBNMessagesPerUserRequestBody : GPBMessage
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) NSInteger limit;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) q interval;
@property (nonatomic) BOOL hasInterval;
@property (nonatomic) NSInteger newUser;
@property (nonatomic) BOOL hasNewUser;
+ (id)descriptor;
@end
