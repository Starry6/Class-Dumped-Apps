@interface IESLatchPageListTemplate : NSObject
@property (nonatomic) NSMutableDictionary pages;
@property (nonatomic) NSArray children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addPageNode:;
- (unsigned long long)countOfPages;
- (id)pageForName:;
- (id)jsonRepresentation;
- (id)process:;
- (id)children;
- (void)setChildren:;
- (void).cxx_destruct;
- (void)setPages:;
- (id)pages;
@end
