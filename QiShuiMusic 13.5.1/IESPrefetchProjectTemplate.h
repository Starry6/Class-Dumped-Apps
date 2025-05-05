@interface IESPrefetchProjectTemplate : NSObject
@property (nonatomic) NSString project;
@property (nonatomic) NSString version;
@property (nonatomic) NSArray children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)project;
- (void)setProject:;
- (id)jsonRepresentation;
- (void)setVersion:;
- (id)version;
- (id)process:;
- (id)children;
- (void)setChildren:;
- (void).cxx_destruct;
@end
