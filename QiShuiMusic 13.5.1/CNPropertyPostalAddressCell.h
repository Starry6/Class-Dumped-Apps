@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell
@property (nonatomic) UIImageView mapImageView;
@property (nonatomic) <CNCancelable> tileGeneratorToken;
@property (nonatomic) BOOL shouldUseMapTiles;
- (void)setProperty:;
- (id)initWithStyle:reuseIdentifier:;
- (void)dealloc;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)variableConstraints;
- (BOOL)shouldUseMapTiles;
- (void)setShouldUseMapTiles:;
- (BOOL)supportsTintColorValue;
- (void)tapGesture:;
- (void)generateAndSetMapTile;
- (void)setMapImage:;
- (id)mapImageView;
- (void)setMapImageView:;
- (id)tileGeneratorToken;
- (void)setTileGeneratorToken:;
@end
