@interface SAContextPromise : SABaseCommand
@property (nonatomic) NSArray promiseTypes;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)promiseTypes;
- (void)setPromiseTypes:;
+ (id)contextPromise;
+ (id)contextPromiseWithDictionary:context:;
@end
