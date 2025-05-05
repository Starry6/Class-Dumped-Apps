@interface BasicAceContext : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aceObjectWithDictionary:;
- (Class)classWithClassName:group:;
- (void)registerGroupAcronym:forGroupWithIdentifier:;
+ (id)sharedBasicAceContext;
@end
