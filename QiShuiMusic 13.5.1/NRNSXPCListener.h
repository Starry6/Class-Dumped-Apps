@interface NRNSXPCListener : NSXPCListener
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <NRNSXPCListenerDelegate> delegate;
- (void)setDelegate:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
@end
