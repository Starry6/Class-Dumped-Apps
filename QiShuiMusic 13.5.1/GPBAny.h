@interface GPBAny : GPBMessage
@property (nonatomic) NSString typeURL;
@property (nonatomic) NSData value;
- (id)initWithMessage:error:;
- (id)initWithMessage:typeURLPrefix:error:;
- (BOOL)packWithMessage:error:;
- (BOOL)packWithMessage:typeURLPrefix:error:;
- (id)unpackMessageClass:error:;
+ (id)descriptor;
+ (id)anyWithMessage:error:;
+ (id)anyWithMessage:typeURLPrefix:error:;
@end
