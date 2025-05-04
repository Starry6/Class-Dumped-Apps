@interface AWELivePreStreamConfigCenter : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSMutableArray elementList;
@property (nonatomic) AWELivePreStreamElementGroup elementGroup;
- (id)elementList;
- (void)setElementList:;
- (id)livePreStreamElementsInContainer:;
- (void)setElementGroup:;
- (id)elementGroup;
- (unsigned long long)convertlivePreStreamScene:;
- (void)p_addElement:toContainer:;
- (void)p_deleteElement:fromContainer:;
- (id)p_elementFullName:;
- (id)livePreStreamContainer;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)initWithScene:;
@end
