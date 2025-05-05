@interface CoreDAVOrderedAction : CoreDAVAction
@property (nonatomic) NSInteger absoluteOrder;
@property (nonatomic) NSURL priorURL;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAction:context:absoluteOrder:;
- (int)absoluteOrder;
- (id)priorURL;
- (void)setPriorURL:;
@end
