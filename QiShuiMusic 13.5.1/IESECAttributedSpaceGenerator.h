@interface IESECAttributedSpaceGenerator : NSObject
@property (nonatomic) double spaceWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)generateAsyncAttributedContent;
- (id)generateAttributedString;
- (void)setSpaceWidth:;
- (id)initWithWidth:;
- (double)spaceWidth;
@end
