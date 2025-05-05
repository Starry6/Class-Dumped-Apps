@interface IESECMutableAttributedStringMaker : IESECBaseMutableAttributedStringMaker
@property (nonatomic) @? raw;
@property (nonatomic) @? string;
@property (nonatomic) @? image;
@property (nonatomic) @? colorImage;
@property (nonatomic) @? space;
- (id)colorImage;
- (id)string;
- (id)image;
- (id)space;
- (id)raw;
@end
