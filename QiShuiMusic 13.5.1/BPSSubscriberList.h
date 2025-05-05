@interface BPSSubscriberList : NSObject
@property (nonatomic) NSMutableArray items;
@property (nonatomic) NSMutableArray tickets;
@property (nonatomic) q nextTicket;
- (id)init;
- (void)setTickets:;
- (id)items;
- (void)setNextTicket:;
- (long long)appendElement:;
- (long long)nextTicket;
- (void)setItems:;
- (id)tickets;
- (void).cxx_destruct;
- (id)claimAll;
- (void)removeTicket:;
@end
