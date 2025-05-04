@interface AWEPlayInteractionComponentGlobalPriorityManager : NSObject
@property (nonatomic) NSMutableArray activatedComponents;
@property (nonatomic) NSMutableDictionary componentDict;
@property (nonatomic) <AWEPzEngineProtocol> feedEngine;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentDict;
- (void)setComponentDict:;
- (BOOL)activateComponentWithID:componentType:component:;
- (id)activatedComponents;
- (BOOL)verifyActivatedComponent;
- (void)filterAvoidedComponent;
- (id)feedEngine;
- (BOOL)containsComponentWithID:componentType:component:;
- (BOOL)registerComponentWithID:componentType:component:;
- (void)setActivatedComponents:;
- (void)setFeedEngine:;
- (void)setModel:;
- (id)init;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
@end
