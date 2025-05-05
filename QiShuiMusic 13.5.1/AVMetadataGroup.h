@interface AVMetadataGroup : NSObject
@property (nonatomic) NSString classifyingLabel;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSArray items;
- (id)uniqueID;
- (id)items;
- (id)copyFormatDescription;
- (id)classifyingLabel;
@end
