@interface SAUpdateReadingState : SABaseCommand
@property (nonatomic) NSArray items;
@property (nonatomic) NSString readingStateId;
@property (nonatomic) q updatedGroupIndex;
@property (nonatomic) q updatedItemIndex;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)items;
- (BOOL)requiresResponse;
- (void)setItems:;
- (id)encodedClassName;
- (id)readingStateId;
- (void)setReadingStateId:;
- (long long)updatedGroupIndex;
- (void)setUpdatedGroupIndex:;
- (long long)updatedItemIndex;
- (void)setUpdatedItemIndex:;
+ (id)updateReadingState;
+ (id)updateReadingStateWithDictionary:context:;
@end
