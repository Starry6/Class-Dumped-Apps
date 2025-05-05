@interface PGMenuItem : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) q identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString symbolName;
@property (nonatomic) @? action;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)symbolName;
- (long long)identifier;
- (id)action;
- (id)succinctDescriptionBuilder;
- (id)title;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)initWithTitle:symbolName:action:;
- (id)initWithDictionary:action:;
- (void)invokeAction;
@end
