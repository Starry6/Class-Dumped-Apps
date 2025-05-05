@interface PKInkManager : NSObject
@property (nonatomic) NSMutableDictionary inks;
@property (nonatomic) NSMutableDictionary supportedInkIdentifiers;
- (id)init;
- (void).cxx_destruct;
- (id)supportedInkIdentifierFromIdentifier:;
- (id)inkBehaviorForIdentifier:variant:;
- (id)inkBehaviorForIdentifier:version:variant:;
- (void)addInkBehavior:forIdentifier:;
- (id)inks;
- (id)supportedInkIdentifiers;
+ (id)defaultInkManager;
+ (void)clearCachedManager;
@end
