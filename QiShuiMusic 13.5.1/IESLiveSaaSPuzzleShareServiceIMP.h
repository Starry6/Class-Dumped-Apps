@interface IESLiveSaaSPuzzleShareServiceIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareForHybridWithURL:title:content:imageURL:context:dismissBlock:;
+ (id)providePuzzleShareService:;
@end
