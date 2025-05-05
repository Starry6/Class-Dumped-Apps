@interface ISResourceMetaData : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSNumber dimension;
@property (nonatomic) NSNumber scale;
@property (nonatomic) BOOL selectedVariant;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDimension:;
- (BOOL)selectedVariant;
- (void)setName:;
- (void)setScale:;
- (id)dimension;
- (void)setSelectedVariant:;
- (void).cxx_destruct;
- (id)name;
- (id)scale;
@end
