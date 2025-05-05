@interface C2RoutingTable : NSObject
@property (nonatomic) NSMutableDictionary routingTable;
- (id)init;
- (id)copyAndDecorateRequest:;
- (void)setRoutingTable:;
- (void).cxx_destruct;
- (void)updateOriginalHostname:destinationHostname:;
- (id)routingTable;
@end
