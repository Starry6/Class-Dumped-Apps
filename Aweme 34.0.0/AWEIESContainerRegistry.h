@interface AWEIESContainerRegistry : NSObject
@property (nonatomic) IESContainer container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerRecipe:forProtocol:;
- (void)registerRecipe:forClass:;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end
