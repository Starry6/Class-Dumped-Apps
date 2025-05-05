@interface WFContextualActionEvent : NSObject
@property (nonatomic) WFContextualAction action;
@property (nonatomic) NSArray contentTypes;
@property (nonatomic) NSString containerName;
@property (nonatomic) Q surface;
- (unsigned long long)surface;
- (id)containerName;
- (id)contentTypes;
- (id)action;
- (void).cxx_destruct;
- (id)initWithAction:contentTypes:containerName:surface:;
@end
