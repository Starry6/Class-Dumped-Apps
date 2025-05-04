@interface AWESearchVideoNoteModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString notes;
- (id)icon;
- (void)setDesc:;
- (id)desc;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (id)notes;
- (void)setNotes:;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
