@interface BDLynxProvider : NSObject
@property (nonatomic) <BDLynxProviderDelegate> lynxProviderDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadTemplateWithUrl:onComplete:;
- (id)lynxProviderDelegate;
- (void)setLynxProviderDelegate:;
- (void).cxx_destruct;
@end
