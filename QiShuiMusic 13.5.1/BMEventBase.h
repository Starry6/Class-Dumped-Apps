@interface BMEventBase : NSObject
@property (nonatomic) NSArray _validators;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)json;
- (id)valueForKeyPath:;
- (BOOL)isCompleteWithContext:error:;
- (id)initWithJSONDictionary:error:;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (BOOL)isValidWithContext:error:;
- (id)forwardingTargetForSelector:;
- (id)_validators;
- (void)set_validators:;
+ (id)columns;
+ (id)validKeyPaths;
@end
