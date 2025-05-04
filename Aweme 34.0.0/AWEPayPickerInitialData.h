@interface AWEPayPickerInitialData : NSObject
@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) NSString conId;
@property (nonatomic) NSString title;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) @? dataBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (void)setTrackParams:;
- (id)conId;
- (void)setConId:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)dataBlock;
- (void)setDataBlock:;
- (BOOL)isMultiSelect;
- (void)setIsMultiSelect:;
@end
