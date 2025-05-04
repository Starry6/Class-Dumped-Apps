@interface AWEDislikeRealDimension : AWEBaseApiModel
@property (nonatomic) q dimensionID;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString identifier;
@property (nonatomic) AWEDislikeEntity entity;
@property (nonatomic) BOOL selected;
- (long long)dimensionID;
- (void)setDimensionID:;
- (id)entity;
- (void)setIdentifier:;
- (id)icon;
- (id)identifier;
- (void)setIcon:;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)setSelected:;
- (void)setEntity:;
@end
