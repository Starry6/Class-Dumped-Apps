@interface CNGroupIdentityInlineActionsViewConfiguration : NSObject
@property (nonatomic) BOOL displaysUnavailableActionTypes;
@property (nonatomic) NSArray supportedActionTypes;
@property (nonatomic) NSDictionary actionsPerType;
@property (nonatomic) q actionViewStyle;
- (void).cxx_destruct;
- (id)supportedActionTypes;
- (id)initWithActions:displaysUnavailableActionTypes:;
- (id)initWithDefaultActionItems:displaysUnavailableActionTypes:;
- (id)initWithDefaultActionItems:displaysUnavailableActionTypes:actionViewStyle:;
- (BOOL)displaysUnavailableActionTypes;
- (id)actionsPerType;
- (long long)actionViewStyle;
@end
