@interface IESLatchProjectTemplate : NSObject
@property (nonatomic) NSArray children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pageForName:;
- (id)jsonRepresentation;
- (id)process:;
- (id)children;
- (void)setChildren:;
- (void).cxx_destruct;
@end
