@interface PACancellableToken : NSObject
@property (nonatomic) BOOL cancelled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cancelled;
- (id)init;
- (void)cancel;
@end
