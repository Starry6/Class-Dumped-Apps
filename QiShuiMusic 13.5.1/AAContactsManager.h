@interface AAContactsManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contactForHandle:;
- (id)_predicateForHandle:;
- (id)contactIDForHandle:;
@end
