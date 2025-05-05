@interface PLPersistentHistoryMarker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString shortDescription;
- (id)shortDescription;
- (id)overrride_changeRequestForFetching;
- (id)overrride_shortDescription;
- (id)changeRequestForFetching;
+ (id)markerWithToken:;
+ (id)markerWithDate:;
+ (id)markerWithTransaction:;
@end
